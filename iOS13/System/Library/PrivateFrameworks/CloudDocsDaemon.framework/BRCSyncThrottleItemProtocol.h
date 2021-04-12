/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

@class BRCItemID, NSString;


@protocol BRCSyncThrottleItemProtocol
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * logicalName; 
@property (nonatomic,readonly) NSString * extension; 
@property (nonatomic,readonly) NSString * appLibraryID; 
@required
-(NSString *)path;
-(BRCItemID *)itemID;
-(NSString *)extension;
-(NSString *)logicalName;
-(NSString *)appLibraryID;

@end

