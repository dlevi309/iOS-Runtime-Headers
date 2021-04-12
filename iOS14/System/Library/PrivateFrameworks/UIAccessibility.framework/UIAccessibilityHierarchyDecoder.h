/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/


@class NSData;

@interface UIAccessibilityHierarchyDecoder : NSObject {

	NSData* _hierarchyData;

}

@property (nonatomic,retain) NSData * hierarchyData;              //@synthesize hierarchyData=_hierarchyData - In the implementation block
-(id)initWithHierarchyData:(id)arg1 ;
-(id)decodeHierarchyWithContainer:(id)arg1 error:(id*)arg2 ;
-(void)setHierarchyData:(NSData *)arg1 ;
-(NSData *)hierarchyData;
@end

