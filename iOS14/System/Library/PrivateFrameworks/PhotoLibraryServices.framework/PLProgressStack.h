/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableArray, NSString;

@interface PLProgressStack : NSObject {

	BOOL notifyUsingAssetsdNotificationCenter;
	float currentMultiplier;
	float currentTotal;
	id delegate;
	NSMutableArray* multipliers;
	NSString* mediaPathString;

}

@property (assign,nonatomic,__weak) id delegate; 
@property (assign,nonatomic) float currentMultiplier; 
@property (nonatomic,retain) NSMutableArray * multipliers; 
@property (assign,nonatomic) float currentTotal; 
@property (assign,nonatomic) BOOL notifyUsingAssetsdNotificationCenter; 
@property (nonatomic,retain) NSString * mediaPathString; 
+(id)unarchiveFromDictionary:(id)arg1 ;
-(void)pop;
-(void)push:(float)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(float)currentTotal;
-(void)updateProgress:(float)arg1 ;
-(void)setCurrentTotal:(float)arg1 ;
-(BOOL)notifyUsingAssetsdNotificationCenter;
-(float)currentMultiplier;
-(NSMutableArray *)multipliers;
-(NSString *)mediaPathString;
-(float)totalProgress:(float)arg1 ;
-(void)popAndUpdate;
-(void)setCurrentMediaPath:(id)arg1 ;
-(id)archiveToDictionary;
-(void)setCurrentMultiplier:(float)arg1 ;
-(void)setMultipliers:(NSMutableArray *)arg1 ;
-(void)setNotifyUsingAssetsdNotificationCenter:(BOOL)arg1 ;
-(void)setMediaPathString:(NSString *)arg1 ;
@end

