/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)dict;
-(PKPaper *)paper;
-(void)setPaper:(PKPaper *)arg1 ;
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(id)settingsDict;
@end

