/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/


@class NSString, TableViewManager;

@interface RecommendationActionController : NSObject {

	NSString* sectionIdentifier;
	NSString* actionKey;
	TableViewManager* tableManager;

}

@property (nonatomic,retain) NSString * sectionIdentifier; 
@property (nonatomic,retain) NSString * actionKey; 
@property (assign,nonatomic) TableViewManager * tableManager; 
+(id)recommendationActionControllerWithTableManager:(id)arg1 andAssistantUIViewController:(id)arg2 ;
-(NSString *)sectionIdentifier;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(NSString *)actionKey;
-(void)setActionKey:(NSString *)arg1 ;
-(TableViewManager *)tableManager;
-(BOOL)isPrimaryRecommendation;
-(id)getSectionInfoWithLongStrings:(BOOL)arg1 ;
-(void)selectPrimaryRecommendation;
-(void)setTableManager:(TableViewManager *)arg1 ;
@end

