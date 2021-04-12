/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)name;
-(NSArray *)options;
-(NSDictionary *)optionsDictionary;
-(id)initWithName:(id)arg1 options:(id)arg2 ;
-(BOOL)containsOption:(id)arg1 ;
-(id)valueForOption:(id)arg1 ;
@end

