/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface PLPhotoAnalysisPersonSuggestion : NSObject {

	BOOL _confirmed;
	long long _keyFaceClusterSequenceNumber;
	NSString* _keyFaceLocalIdentifier;
	NSString* _personLocalIdentifier;
	long long _personFaceCount;

}

@property (nonatomic,readonly) long long keyFaceClusterSequenceNumber;              //@synthesize keyFaceClusterSequenceNumber=_keyFaceClusterSequenceNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyFaceLocalIdentifier;              //@synthesize keyFaceLocalIdentifier=_keyFaceLocalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * personLocalIdentifier;               //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,readonly) long long personFaceCount;                           //@synthesize personFaceCount=_personFaceCount - In the implementation block
@property (nonatomic,readonly) BOOL confirmed;                                      //@synthesize confirmed=_confirmed - In the implementation block
-(NSString *)personLocalIdentifier;
-(id)suggestionDictionaryRepresentation;
-(long long)keyFaceClusterSequenceNumber;
-(long long)personFaceCount;
-(BOOL)confirmed;
-(id)description;
-(NSString *)keyFaceLocalIdentifier;
-(id)initWithSuggestionDictionary:(id)arg1 ;
@end

