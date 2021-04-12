/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray;


@protocol INStopShareETAIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * recipients; 
@property (assign,nonatomic) unsigned long long mediums; 
@required
-(long long)code;
-(NSArray *)recipients;
-(void)setRecipients:(id)arg1;
-(unsigned long long)mediums;
-(void)setMediums:(unsigned long long)arg1;

@end

