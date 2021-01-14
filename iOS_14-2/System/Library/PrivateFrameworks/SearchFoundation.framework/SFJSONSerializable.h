/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

