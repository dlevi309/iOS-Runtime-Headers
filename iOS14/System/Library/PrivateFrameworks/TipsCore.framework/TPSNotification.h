/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TPSAssets;

@interface TPSNotification : TPSSerializableObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _text;
	TPSAssets* _assets;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) TPSAssets * assets;              //@synthesize assets=_assets - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)na_identity;
+(id)notificationFromDictionary:(id)arg1 ;
-(TPSAssets *)assets;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)debugDescription;
-(void)setText:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(void)setAssets:(TPSAssets *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

