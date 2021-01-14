/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXGSolidColorSource.h>

@class NSArray, NSString;

@interface PXGPPTAnimationLayout : PXGLayout <PXGSolidColorSource> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	NSArray* _colors;
	unsigned _numberOfRows;
	unsigned _numberOfColumns;
	long long _style;

}

@property (assign,nonatomic) unsigned numberOfRows;                              //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) unsigned numberOfColumns;                           //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) long long style;                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSString * configurationDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNumberOfColumns:(unsigned)arg1 ;
-(id)init;
-(unsigned)numberOfRows;
-(id)colorAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(unsigned)numberOfColumns;
-(void)update;
-(NSString *)configurationDescription;
-(void)setNumberOfRows:(unsigned)arg1 ;
-(void)referenceSizeDidChange;
-(void)_updateContent;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
@end

