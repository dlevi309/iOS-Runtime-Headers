/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)propertyNames;
-(NSString *)personLocalIdentifier;
-(id)description;
-(unsigned long long)type;
-(void)mergeChange:(id)arg1 ;
-(PGGraphPersonNode *)personNode;
-(void)setPersonNode:(PGGraphPersonNode *)arg1 ;
-(id)initWithPersonLocalIdentifier:(id)arg1 propertyNames:(id)arg2 ;
@end

