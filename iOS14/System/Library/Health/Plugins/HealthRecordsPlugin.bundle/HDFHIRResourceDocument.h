/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSMutableArray, NSArray;

@interface HDFHIRResourceDocument : NSObject {

	NSMutableArray* _resourceObjects;

}

@property (nonatomic,copy,readonly) NSArray * resourceObjects; 
-(id)dictionaryRepresentation;
-(id)_dictionaryRepresentationWithResourceHandler:(/*^block*/id)arg1 ;
-(NSArray *)resourceObjects;
-(void)addResourceObjects:(id)arg1 ;
@end

