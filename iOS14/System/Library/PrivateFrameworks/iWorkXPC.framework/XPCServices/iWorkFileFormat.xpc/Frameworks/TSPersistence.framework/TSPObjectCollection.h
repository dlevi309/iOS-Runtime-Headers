/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSReading/TSPObject.h>

@class NSArray;

@interface TSPObjectCollection : TSPObject {

	NSArray* _objects;

}

@property (nonatomic,readonly) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
-(NSArray *)objects;
-(id)initWithContext:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)tsp_publicLoggingDescription;
-(id)initWithContext:(id)arg1 objects:(id)arg2 ;
@end

