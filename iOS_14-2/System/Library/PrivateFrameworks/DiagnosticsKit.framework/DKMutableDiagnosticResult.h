/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)files;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setData:(NSDictionary *)arg1 ;
-(NSNumber *)statusCode;
-(NSDictionary *)data;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFiles:(NSArray *)arg1 ;
@end

