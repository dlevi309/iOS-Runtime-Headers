/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)setName:(NSString *)arg1 ;
-(id)colorForIndex:(int)arg1 ;
-(void)addColor:(id)arg1 index:(int)arg2 ;
-(unsigned long long)colorCount;
-(void)validateColorScheme;
-(void)setColor:(id)arg1 index:(int)arg2 ;
@end

