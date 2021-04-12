/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <TipsCore/TPSDocument.h>

@class NSString;

@interface TPSWelcomeDocument : TPSDocument {

	NSString* _majorVersion;

}

@property (nonatomic,copy) NSString * majorVersion;              //@synthesize majorVersion=_majorVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMajorVersion:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)majorVersion;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

