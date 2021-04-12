/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/


@class NSString, NSDictionary;

@interface RTTServiceUpdate : NSObject {

	NSString* _serviceUpdateType;
	NSDictionary* _options;

}

@property (nonatomic,retain) NSString * serviceUpdateType;              //@synthesize serviceUpdateType=_serviceUpdateType - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)serviceUpdateType;
-(id)initWithServiceUpdateType:(id)arg1 options:(id)arg2 ;
-(id)optionValueForKey:(id)arg1 ;
-(void)setServiceUpdateType:(NSString *)arg1 ;
@end

