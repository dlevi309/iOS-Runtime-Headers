/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface TDLocalization : NSManagedObject {

	NSString* _name;
	unsigned short _identifier;

}

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) unsigned short identifier; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(unsigned short)arg1 ;
-(unsigned short)identifier;
@end

