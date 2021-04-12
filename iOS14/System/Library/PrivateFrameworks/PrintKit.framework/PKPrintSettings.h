/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/


@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject {

	NSMutableDictionary* _dict;
	PKPaper* paper;

}

@property (nonatomic,retain) NSMutableDictionary * dict;              //@synthesize dict=_dict - In the implementation block
@property (nonatomic,retain) PKPaper * paper; 
+(id)photo;
+(id)default;
+(id)printSettingsForPrinter:(id)arg1 ;
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(PKPaper *)paper;
-(id)init;
-(NSMutableDictionary *)dict;
-(void)removeObjectForKey:(id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setPaper:(PKPaper *)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)settingsDict;
@end

