/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDictionary, NSArray;

@interface DKDiagnosticResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSNumber* _statusCode;
	NSDictionary* _data;
	NSArray* _files;

}

@property (nonatomic,readonly) NSNumber * statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * data;                //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSArray * files;                    //@synthesize files=_files - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSArray *)files;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSNumber *)statusCode;
-(id)description;
-(NSDictionary *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMutableResult:(id)arg1 ;
@end

