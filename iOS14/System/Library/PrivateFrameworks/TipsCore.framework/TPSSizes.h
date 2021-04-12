/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TPSSize;

@interface TPSSizes : TPSSerializableObject <NSCopying, NSSecureCoding> {

	TPSSize* _compact;
	TPSSize* _regular;

}

@property (nonatomic,retain) TPSSize * compact;              //@synthesize compact=_compact - In the implementation block
@property (nonatomic,retain) TPSSize * regular;              //@synthesize regular=_regular - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(TPSSize *)regular;
-(void)setRegular:(TPSSize *)arg1 ;
-(double)heightToWidthRatioForViewMode:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCompact:(TPSSize *)arg1 ;
-(TPSSize *)compact;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

