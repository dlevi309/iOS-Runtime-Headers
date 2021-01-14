/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSString, NSMutableArray;

@interface IMOrderingTools : NSObject {

	NSString* _jsonFilePath;
	NSMutableArray* _jsonArray;

}

@property (nonatomic,retain) NSString * jsonFilePath;                 //@synthesize jsonFilePath=_jsonFilePath - In the implementation block
@property (nonatomic,retain) NSMutableArray * jsonArray;              //@synthesize jsonArray=_jsonArray - In the implementation block
-(void)setUpJSONFileForChatGUID:(id)arg1 ;
-(void)printChangeInItemsToJSON:(id)arg1 ;
-(id)pathToDirectoryOfJSONFile;
-(void)setJsonFilePath:(NSString *)arg1 ;
-(id)messageDictionariesFromItemsInChat:(id)arg1 withEventKey:(id)arg2 ;
-(id)currentJsonArray;
-(void)writeDataToJSONFile:(id)arg1 ;
-(void)printChangeInItemsToJSONFromChat:(id)arg1 ;
-(NSString *)jsonFilePath;
-(void)startTrackingChat:(id)arg1 ;
-(NSMutableArray *)jsonArray;
-(void)setJsonArray:(NSMutableArray *)arg1 ;
@end

