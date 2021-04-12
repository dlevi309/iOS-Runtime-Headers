/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1 ;
-(NSArray *)supportedTypes;
-(void)setSupportedTypes:(NSArray *)arg1 ;
@end

