/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(XBApplicationSnapshotPredicate *)predicate;
-(void)setPredicate:(XBApplicationSnapshotPredicate *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(XBApplicationSnapshotGenerationContext *)fallbackGenerationContext;
-(NSArray *)sortDescriptors;
-(NSString *)description;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSArray *)NSSortDescriptors;
-(void)setFallbackGenerationContext:(XBApplicationSnapshotGenerationContext *)arg1 ;
@end

