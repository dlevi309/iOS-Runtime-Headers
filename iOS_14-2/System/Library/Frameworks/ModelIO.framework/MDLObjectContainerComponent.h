/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

@class NSArray;


@protocol MDLObjectContainerComponent <MDLComponent,NSFastEnumeration>
@property (readonly) unsigned long long count; 
@property (nonatomic,retain,readonly) NSArray * objects; 
@required
-(NSArray *)objects;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1;
-(unsigned long long)count;
-(void)addObject:(id)arg1;
-(void)removeObject:(id)arg1;

@end

