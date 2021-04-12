/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
*/


@class NSString, NSArray;

@interface ACCNavigationAccessoryObjectDetectionComponent : NSObject {

	BOOL _isEnabled;
	unsigned long long _identifier;
	NSString* _name;
	NSArray* _supportedTypes;

}

@property (assign) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign) BOOL isEnabled;                             //@synthesize isEnabled=_isEnabled - In the implementation block
@property (retain) NSArray * supportedTypes;                   //@synthesize supportedTypes=_supportedTypes - In the implementation block
-(NSArray *)supportedTypes;
-(void)setIsEnabled:(BOOL)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(unsigned long long)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSupportedTypes:(NSArray *)arg1 ;
@end

