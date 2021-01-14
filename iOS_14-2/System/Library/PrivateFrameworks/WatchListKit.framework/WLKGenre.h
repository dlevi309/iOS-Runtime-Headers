/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString;

@interface WLKGenre : NSObject {

	NSString* _uniqueID;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
+(id)genresWithDictionaries:(id)arg1 ;
-(NSString *)uniqueID;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
@end

