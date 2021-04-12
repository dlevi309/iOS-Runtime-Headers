/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessageProfile:(PGMessageProfile *)arg1 ;
-(NSSet *)loveEmojis;
-(BOOL)_isInterestingGroupChatWithPersons:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(NSSet *)contactIdentifiers;
-(id)addressComponentFromText:(id)arg1 usingDataDetector:(id)arg2 ;
-(PGMessageProfile *)messageProfile;
-(void)setPersonLocalIdentifierByCNIdentifier:(NSDictionary *)arg1 ;
-(unsigned long long)numberOfEmojis:(id)arg1 inText:(id)arg2 ;
-(NSSet *)personNodes;
-(NSDictionary *)personLocalIdentifierByCNIdentifier;
@end

