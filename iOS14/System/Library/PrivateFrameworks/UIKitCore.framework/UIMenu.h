/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMenuElement.h>

@class NSString, NSArray;

@interface UIMenu : UIMenuElement {

	SCD_Struct_UI40 _metadata;
	NSString* _identifier;
	unsigned long long _options;
	NSArray* _children;

}

@property (assign,nonatomic) SCD_Struct_UI40 metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * children;                      //@synthesize children=_children - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)menuWithTitle:(id)arg1 imageName:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5 ;
+(id)menuWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5 ;
+(id)menuWithChildren:(id)arg1 ;
+(id)menuWithTitle:(id)arg1 children:(id)arg2 ;
-(NSArray *)children;
-(id)_spiRepresentation;
-(id)_mutableCopy;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(void)setMetadata:(SCD_Struct_UI40)arg1 ;
-(id)description;
-(id)_immutableCopy;
-(BOOL)_containsSelectedItem;
-(id)menuByReplacingChildren:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(NSString *)identifier;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 identifier:(id)arg4 options:(unsigned long long)arg5 children:(id)arg6 ;
-(SCD_Struct_UI40)metadata;
-(id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 options:(unsigned long long)arg4 children:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMenu:(id)arg1 overrideChildren:(id)arg2 ;
@end

