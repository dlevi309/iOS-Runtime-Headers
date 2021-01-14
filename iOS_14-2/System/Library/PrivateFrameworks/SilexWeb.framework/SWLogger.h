/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWLogger.h>

@protocol SWLogger <NSObject>
@required
-(void)log:(id)arg1;
-(void)bindValue:(id)arg1 forKey:(id)arg2;
-(void)logSensitive:(id)arg1;

@end


@class NSMutableDictionary, NSString;

@interface SWLogger : NSObject <SWLogger> {

	NSMutableDictionary* _values;

}

@property (nonatomic,readonly) NSMutableDictionary * values;              //@synthesize values=_values - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableDictionary *)values;
-(void)log:(id)arg1 ;
-(void)bindValue:(id)arg1 forKey:(id)arg2 ;
-(void)logSensitive:(id)arg1 ;
-(id)constructLogWithMessage:(id)arg1 ;
@end

