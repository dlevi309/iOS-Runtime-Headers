/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)complete;
+(id)none;
+(id)completeUnlessOpen;
+(id)completeUntilFirstUserAuthentication;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileProtection:(NSString *)arg1 ;
-(BOOL)indicatesProtection;
-(NSString *)fileProtection;
-(id)initWithProtection:(id)arg1 ;
@end

