/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(NSString *)processName;
-(NSString *)containerIdentifier;
-(NSDictionary *)payload;
-(id)initWithContainerIdentifier:(id)arg1 ;
@end

