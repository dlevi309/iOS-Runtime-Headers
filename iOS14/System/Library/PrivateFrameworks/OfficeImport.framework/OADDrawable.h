/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OADClient, OADDrawableContainer;
#import <OfficeImport/OfficeImport-Structs.h>
@class OADDrawableProperties;

@interface OADDrawable : NSObject {

	BOOL mHidden;
	unsigned mId;
	unsigned mAltId;
	OADDrawableProperties* mDrawableProperties;
	id<OADClient> mClientData;
	OADDrawable*<OADDrawableContainer> mParent;

}

@property (__weak) OADDrawable*<OADDrawableContainer> parent; 
+(unsigned)generateOADDrawableId:(id)arg1 ;
-(unsigned)id;
-(BOOL)hidden;
-(OADDrawable*<OADDrawableContainer>)parent;
-(void)setHidden:(BOOL)arg1 ;
-(void)setId:(unsigned)arg1 ;
-(unsigned)altId;
-(void)setParent:(OADDrawable*<OADDrawableContainer>)arg1 ;
-(id)description;
-(id)drawableProperties;
-(void)setDrawableProperties:(id)arg1 ;
-(void)setClientData:(id)arg1 ;
-(id)clientData;
-(void)setAltId:(unsigned)arg1 ;
-(void)removeUnnecessaryOverrides;
-(id)initWithPropertiesClass:(Class)arg1 ;
-(id)ensureClientDataOfClass:(Class)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(id)createOrientedBoundsWithBounds:(CGRect)arg1 ;
-(id)createWordClientDataWithTextType:(int)arg1 ;
@end

