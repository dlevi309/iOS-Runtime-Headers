/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSSet, NSDictionary, PGMessageProfile, NSString;

@interface PGGraphIngestMessageProcessor : NSObject <PGGraphIngestProcessor> {

	NSSet* _personNodes;
	NSSet* _contactIdentifiers;
	NSDictionary* _personLocalIdentifierByCNIdentifier;
	PGMessageProfile* _messageProfile;
	NSSet* _loveEmojis;

}

@property (nonatomic,readonly) NSSet * personNodes;                                           //@synthesize personNodes=_personNodes - In the implementation block
@property (nonatomic,readonly) NSSet * contactIdentifiers;                                    //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (nonatomic,retain) PGMessageProfile * messageProfile;                               //@synthesize messageProfile=_messageProfile - In the implementation block
@property (nonatomic,retain) NSDictionary * personLocalIdentifierByCNIdentifier;              //@synthesize personLocalIdentifierByCNIdentifier=_personLocalIdentifierByCNIdentifier - In the implementation block
@property (nonatomic,readonly) NSSet * loveEmojis;                                            //@synthesize loveEmojis=_loveEmojis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)contactIdentifiers;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(NSSet *)personNodes;
-(BOOL)_isInterestingGroupChatWithPersons:(id)arg1 ;
-(id)addressComponentFromText:(id)arg1 usingDataDetector:(id)arg2 ;
-(unsigned long long)numberOfEmojis:(id)arg1 inText:(id)arg2 ;
-(NSSet *)loveEmojis;
-(NSDictionary *)personLocalIdentifierByCNIdentifier;
-(void)setPersonLocalIdentifierByCNIdentifier:(NSDictionary *)arg1 ;
-(PGMessageProfile *)messageProfile;
-(void)setMessageProfile:(PGMessageProfile *)arg1 ;
@end

