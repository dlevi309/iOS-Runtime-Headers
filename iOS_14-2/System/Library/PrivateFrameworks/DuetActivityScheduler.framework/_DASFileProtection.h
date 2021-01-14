/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding> {

	NSString* _fileProtection;

}

@property (nonatomic,copy) NSString * fileProtection;              //@synthesize fileProtection=_fileProtection - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)completeUnlessOpen;
+(id)none;
+(id)complete;
+(id)completeUntilFirstUserAuthentication;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithProtection:(id)arg1 ;
-(NSString *)fileProtection;
-(id)description;
-(BOOL)indicatesProtection;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileProtection:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

