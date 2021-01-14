/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString, NSDictionary;

@interface MLModelMetadata : NSObject {

	NSString* _name;
	NSString* _shortDescription;
	NSString* _versionString;
	NSString* _author;
	NSString* _license;
	NSDictionary* _creatorDefined;

}

@property (readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (readonly) NSString * shortDescription;                //@synthesize shortDescription=_shortDescription - In the implementation block
@property (readonly) NSString * versionString;                   //@synthesize versionString=_versionString - In the implementation block
@property (readonly) NSString * author;                          //@synthesize author=_author - In the implementation block
@property (readonly) NSString * license;                         //@synthesize license=_license - In the implementation block
@property (readonly) NSDictionary * creatorDefined;              //@synthesize creatorDefined=_creatorDefined - In the implementation block
-(NSString *)versionString;
-(NSString *)author;
-(id)initWithName:(id)arg1 shortDescription:(id)arg2 versionString:(id)arg3 author:(id)arg4 license:(id)arg5 creatorDefined:(id)arg6 ;
-(NSString *)shortDescription;
-(id)debugDescription;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSString *)license;
-(NSDictionary *)creatorDefined;
@end

