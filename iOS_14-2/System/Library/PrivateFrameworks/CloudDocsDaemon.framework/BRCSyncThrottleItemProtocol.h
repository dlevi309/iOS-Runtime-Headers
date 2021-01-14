/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)logicalName;
-(NSString *)appLibraryID;
-(BRCItemID *)itemID;
-(NSString *)extension;

@end

