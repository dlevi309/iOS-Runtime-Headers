/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <DiagnosticsKit/DKDiagnosticResult.h>

@class NSNumber, NSDictionary, NSArray;

@interface DKMutableDiagnosticResult : DKDiagnosticResult {

	NSNumber* _statusCode;
	NSDictionary* _data;
	NSArray* _files;

}

@property (nonatomic,retain) NSNumber * statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * files;                    //@synthesize files=_files - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)data;
-(NSNumber *)statusCode;
-(void)setData:(NSDictionary *)arg1 ;
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(void)setStatusCode:(NSNumber *)arg1 ;
@end

