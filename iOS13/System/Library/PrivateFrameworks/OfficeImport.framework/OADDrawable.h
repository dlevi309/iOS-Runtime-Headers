/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(OADDrawable*<OADDrawableContainer>)parent;
-(void)setParent:(OADDrawable*<OADDrawableContainer>)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hidden;
-(id)drawableProperties;
-(void)setDrawableProperties:(id)arg1 ;
-(unsigned)id;
-(id)clientData;
-(void)setId:(unsigned)arg1 ;
-(void)setClientData:(id)arg1 ;
-(void)setAltId:(unsigned)arg1 ;
-(void)removeUnnecessaryOverrides;
-(id)initWithPropertiesClass:(Class)arg1 ;
-(unsigned)altId;
-(id)ensureClientDataOfClass:(Class)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(id)createOrientedBoundsWithBounds:(CGRect)arg1 ;
-(id)createWordClientDataWithTextType:(int)arg1 ;
@end

