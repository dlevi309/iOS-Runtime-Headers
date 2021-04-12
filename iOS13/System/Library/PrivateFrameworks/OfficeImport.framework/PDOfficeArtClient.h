/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OADClient.h>
#import <libobjc.A.dylib/OADImageRecolorInfoClient.h>

@class OADImageRecolorInfo, PDPlaceholder, PDAnimationInfo, NSString;

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {

	OADImageRecolorInfo* mImageRecolorInfo;
	PDPlaceholder* mPlaceholder;
	BOOL mIsComment;
	PDAnimationInfo* mAnimationInfo;
	BOOL mHasOleChart;
	int mInheritedTextStylePlaceholderType;

}

@property (assign,nonatomic) int inheritedTextStylePlaceholderType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(CGRect)bounds;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(BOOL)hasBounds;
-(BOOL)hasPlaceholder;
-(id)animationInfo;
-(void)setInheritedTextStylePlaceholderType:(int)arg1 ;
-(void)setImageRecolorInfo:(id)arg1 ;
-(void)setHasOleChart:(BOOL)arg1 ;
-(BOOL)hasOleChart;
-(id)imageRecolorInfo;
-(BOOL)isComment;
-(void)setIsComment:(BOOL)arg1 ;
-(BOOL)hasAnimationInfo;
-(void)setAnimationInfo:(id)arg1 ;
-(int)inheritedTextStylePlaceholderType;
@end

