/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHFolderIconVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	CGSize _gridCellSize;
	CGSize _gridCellSpacing;

}

@property (assign,nonatomic) CGSize gridCellSize;                   //@synthesize gridCellSize=_gridCellSize - In the implementation block
@property (assign,nonatomic) CGSize gridCellSpacing;                //@synthesize gridCellSpacing=_gridCellSpacing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGSize)gridCellSize;
-(CGSize)gridCellSpacing;
-(void)setGridCellSize:(CGSize)arg1 ;
-(void)setGridCellSpacing:(CGSize)arg1 ;
@end

