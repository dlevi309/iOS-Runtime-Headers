/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FPItemID *)enumeratedItemID;
-(BOOL)wantsTrashEnumeration;
-(void)setEnumeratedItemID:(FPItemID *)arg1 ;
-(BOOL)isPresenterEnumeration;
-(void)setPresenterEnumeration:(BOOL)arg1 ;
-(BOOL)wantsDirectExtensionEnumeration;
-(void)setWantsDirectExtensionEnumeration:(BOOL)arg1 ;
-(void)setWantsTrashEnumeration:(BOOL)arg1 ;
@end

