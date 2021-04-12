/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

@class NSArray;


@protocol MDLObjectContainerComponent <MDLComponent,NSFastEnumeration>
@property (readonly) unsigned long long count; 
@property (nonatomic,retain,readonly) NSArray * objects; 
@required
-(unsigned long long)count;
-(void)addObject:(id)arg1;
-(void)removeObject:(id)arg1;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1;
-(NSArray *)objects;

@end

