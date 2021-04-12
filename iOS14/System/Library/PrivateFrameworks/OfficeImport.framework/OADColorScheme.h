/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary;

@interface OADColorScheme : NSObject <NSCopying> {

	NSString* mName;
	NSMutableDictionary* mColors;

}

@property (nonatomic,copy) NSString * name; 
-(id)init;
-(id)colorForIndex:(int)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addColor:(id)arg1 index:(int)arg2 ;
-(unsigned long long)colorCount;
-(void)validateColorScheme;
-(void)setColor:(id)arg1 index:(int)arg2 ;
@end

