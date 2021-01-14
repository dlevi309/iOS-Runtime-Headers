/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray;


@protocol INStopShareETAIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * recipients; 
@property (assign,nonatomic) unsigned long long mediums; 
@required
-(NSArray *)recipients;
-(void)setRecipients:(id)arg1;
-(unsigned long long)mediums;
-(void)setMediums:(unsigned long long)arg1;
-(long long)code;

@end

