/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

@class NSData, NSDictionary;


@protocol SFJSONSerializable <NSObject>
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;

@end

