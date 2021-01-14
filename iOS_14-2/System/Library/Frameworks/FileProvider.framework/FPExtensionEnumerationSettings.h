/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <FileProvider/FPEnumerationSettings.h>

@class FPItemID;

@interface FPExtensionEnumerationSettings : FPEnumerationSettings {

	BOOL _presenterEnumeration;
	BOOL _wantsDirectExtensionEnumeration;
	BOOL _wantsTrashEnumeration;
	FPItemID* _enumeratedItemID;

}

@property (nonatomic,copy) FPItemID * enumeratedItemID;                                            //@synthesize enumeratedItemID=_enumeratedItemID - In the implementation block
@property (assign,getter=isPresenterEnumeration,nonatomic) BOOL presenterEnumeration;              //@synthesize presenterEnumeration=_presenterEnumeration - In the implementation block
@property (assign,nonatomic) BOOL wantsDirectExtensionEnumeration;                                 //@synthesize wantsDirectExtensionEnumeration=_wantsDirectExtensionEnumeration - In the implementation block
@property (assign,nonatomic) BOOL wantsTrashEnumeration;                                           //@synthesize wantsTrashEnumeration=_wantsTrashEnumeration - In the implementation block
+(BOOL)supportsSecureCoding;
-(FPItemID *)enumeratedItemID;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)wantsTrashEnumeration;
-(id)description;
-(void)setEnumeratedItemID:(FPItemID *)arg1 ;
-(BOOL)isPresenterEnumeration;
-(void)setPresenterEnumeration:(BOOL)arg1 ;
-(BOOL)wantsDirectExtensionEnumeration;
-(void)setWantsDirectExtensionEnumeration:(BOOL)arg1 ;
-(void)setWantsTrashEnumeration:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

