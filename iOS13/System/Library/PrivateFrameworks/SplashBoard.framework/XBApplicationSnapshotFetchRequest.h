/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class XBApplicationSnapshotPredicate, NSArray, XBApplicationSnapshotGenerationContext, NSString;

@interface XBApplicationSnapshotFetchRequest : NSObject <BSDescriptionProviding> {

	XBApplicationSnapshotPredicate* _predicate;
	NSArray* _sortDescriptors;
	XBApplicationSnapshotGenerationContext* _fallbackGenerationContext;

}

@property (nonatomic,copy,readonly) NSArray * NSSortDescriptors; 
@property (nonatomic,retain) XBApplicationSnapshotPredicate * predicate;                                      //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                                                         //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) XBApplicationSnapshotGenerationContext * fallbackGenerationContext;              //@synthesize fallbackGenerationContext=_fallbackGenerationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchRequest;
-(NSString *)description;
-(void)setPredicate:(XBApplicationSnapshotPredicate *)arg1 ;
-(XBApplicationSnapshotPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(XBApplicationSnapshotGenerationContext *)fallbackGenerationContext;
-(NSArray *)NSSortDescriptors;
-(void)setFallbackGenerationContext:(XBApplicationSnapshotGenerationContext *)arg1 ;
@end

