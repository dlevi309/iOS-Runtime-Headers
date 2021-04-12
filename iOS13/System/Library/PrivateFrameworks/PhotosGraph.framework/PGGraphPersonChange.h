/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphPersonNode, NSSet;

@interface PGGraphPersonChange : PGGraphChange {

	NSString* _personLocalIdentifier;
	PGGraphPersonNode* _personNode;
	NSSet* _propertyNames;

}

@property (nonatomic,readonly) NSString * personLocalIdentifier;              //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,retain) PGGraphPersonNode * personNode;                  //@synthesize personNode=_personNode - In the implementation block
@property (nonatomic,readonly) NSSet * propertyNames;                         //@synthesize propertyNames=_propertyNames - In the implementation block
-(id)description;
-(unsigned long long)type;
-(NSString *)personLocalIdentifier;
-(NSSet *)propertyNames;
-(PGGraphPersonNode *)personNode;
-(void)setPersonNode:(PGGraphPersonNode *)arg1 ;
-(void)mergeChange:(id)arg1 ;
-(id)initWithPersonLocalIdentifier:(id)arg1 propertyNames:(id)arg2 ;
@end

