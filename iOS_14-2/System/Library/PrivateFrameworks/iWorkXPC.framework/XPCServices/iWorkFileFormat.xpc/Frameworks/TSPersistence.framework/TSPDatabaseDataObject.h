/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSReading/TSPObject.h>

@class TSPData;

@interface TSPDatabaseDataObject : TSPObject {

	TSPData* _data;

}

@property (nonatomic,readonly) TSPData * data;              //@synthesize data=_data - In the implementation block
-(TSPData *)data;
-(void)loadFromUnarchiver:(id)arg1 ;
@end

