/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSBagValue.h>

@protocol AMSBagDataSourceProtocol;
@interface AMSFrozenBagValue : AMSBagValue {

	id<AMSBagDataSourceProtocol> _dataSource;

}

@property (nonatomic,retain) id<AMSBagDataSourceProtocol> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<AMSBagDataSourceProtocol>)dataSource;
-(void)setDataSource:(id<AMSBagDataSourceProtocol>)arg1 ;
-(id)initWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3 ;
@end

