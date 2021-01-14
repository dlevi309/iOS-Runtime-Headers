/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSString, NSDictionary, NSArray;

@interface CKObjCClass : NSObject {

	Class _handle;
	NSString* _name;
	NSDictionary* _propertiesByName;
	NSArray* _sortedProperties;

}

@property (nonatomic,readonly) NSDictionary * propertiesByName;              //@synthesize propertiesByName=_propertiesByName - In the implementation block
@property (nonatomic,readonly) NSArray * sortedProperties;                   //@synthesize sortedProperties=_sortedProperties - In the implementation block
@property (nonatomic,readonly) Class handle;                                 //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
+(id)classForObject:(id)arg1 ;
+(id)classForHandle:(Class)arg1 ;
-(id)initWithHandle:(Class)arg1 ;
-(id)allProperties;
-(Class)handle;
-(id)propertyForName:(id)arg1 ;
-(NSString *)name;
-(NSArray *)sortedProperties;
-(NSDictionary *)propertiesByName;
@end

