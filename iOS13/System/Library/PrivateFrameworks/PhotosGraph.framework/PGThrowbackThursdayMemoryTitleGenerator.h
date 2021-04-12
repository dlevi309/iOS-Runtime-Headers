/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>
#import <libobjc.A.dylib/PGSpecBasedTitleGeneratorDelegate.h>

@class NSString;

@interface PGThrowbackThursdayMemoryTitleGenerator : PGTitleGenerator <PGSpecBasedTitleGeneratorDelegate> {

	long long _numberOfYearsAgo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)titleGenerator:(id)arg1 inputForArgument:(id)arg2 ;
-(id)initWithMomentNode:(id)arg1 numberOfYearsAgo:(long long)arg2 ;
@end

