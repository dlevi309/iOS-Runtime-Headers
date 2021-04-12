/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/PFCloudKitMetric.h>

@class NSString, NSDictionary;

@interface PFCloudKitBaseMetric : NSObject <PFCloudKitMetric> {

	NSString* _containerIdentifier;
	NSString* _processName;

}

@property (nonatomic,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * processName;                      //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDictionary * payload; 
-(NSString *)processName;
-(NSDictionary *)payload;
-(NSString *)containerIdentifier;
-(NSString *)name;
-(id)description;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)dealloc;
@end

