/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INMediaSearch;


@protocol INSearchForMediaIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,copy) INMediaSearch * mediaSearch; 
@required
-(id)init;
-(NSArray *)mediaItems;
-(void)setMediaItems:(id)arg1;
-(INMediaSearch *)mediaSearch;
-(void)setMediaSearch:(id)arg1;

@end

