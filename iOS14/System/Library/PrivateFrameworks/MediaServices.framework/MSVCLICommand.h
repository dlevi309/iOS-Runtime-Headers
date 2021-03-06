/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSDictionary, NSString, NSArray;

@interface MSVCLICommand : NSObject {

	NSDictionary* _cachedOptionsDictionary;
	NSString* _name;
	NSArray* _options;

}

@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDictionary * optionsDictionary; 
-(id)initWithName:(id)arg1 options:(id)arg2 ;
-(BOOL)containsOption:(id)arg1 ;
-(id)valueForOption:(id)arg1 ;
-(id)init;
-(NSArray *)options;
-(NSString *)name;
-(id)description;
-(NSDictionary *)optionsDictionary;
@end

