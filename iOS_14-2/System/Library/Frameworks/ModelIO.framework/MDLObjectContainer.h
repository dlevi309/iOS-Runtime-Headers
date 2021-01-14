/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLObjectContainerComponent.h>

@class NSArray, NSMutableArray, NSString;

@interface MDLObjectContainer : NSObject <MDLObjectContainerComponent> {

	NSMutableArray* _objects;

}

@property (readonly) unsigned long long count; 
@property (nonatomic,retain,readonly) NSArray * objects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)objects;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MD5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
@end

