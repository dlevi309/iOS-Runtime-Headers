/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDebugHierarchyElement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXDebugHierarchyMutableElement : NSObject <PXDebugHierarchyElement, NSCopying> {

	BOOL _canHaveChildren;
	unsigned long long _identifier;
	double _zPosition;
	double _alpha;
	CGImageRef _previewImage;
	NSString* _contentsGravity;
	CGColorRef _backgroundColor;
	NSString* _name;
	unsigned long long _parentIdentifier;
	CGRect _frame;
	CGRect _contentsRect;

}

@property (assign,nonatomic) CGRect frame;                                     //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double zPosition;                                 //@synthesize zPosition=_zPosition - In the implementation block
@property (assign,nonatomic) double alpha;                                     //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) CGImageRef previewImage;                          //@synthesize previewImage=_previewImage - In the implementation block
@property (assign,nonatomic) CGRect contentsRect;                              //@synthesize contentsRect=_contentsRect - In the implementation block
@property (nonatomic,retain) NSString * contentsGravity;                       //@synthesize contentsGravity=_contentsGravity - In the implementation block
@property (assign,nonatomic) CGColorRef backgroundColor;                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL canHaveChildren;                             //@synthesize canHaveChildren=_canHaveChildren - In the implementation block
@property (assign,nonatomic) unsigned long long parentIdentifier;              //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
-(CGRect)contentsRect;
-(id)init;
-(double)alpha;
-(void)setZPosition:(double)arg1 ;
-(BOOL)canHaveChildren;
-(void)setCanHaveChildren:(BOOL)arg1 ;
-(unsigned long long)parentIdentifier;
-(CGRect)frame;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)prepareForReuse;
-(CGColorRef)backgroundColor;
-(void)setContentsRect:(CGRect)arg1 ;
-(NSString *)name;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPreviewImage:(CGImageRef)arg1 ;
-(CGImageRef)previewImage;
-(void)setParentIdentifier:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)identifier;
-(void)setAlpha:(double)arg1 ;
-(NSString *)contentsGravity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentsGravity:(NSString *)arg1 ;
-(double)zPosition;
@end

